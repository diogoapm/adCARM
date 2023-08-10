#!/bin/bash

#LARISSA
#default: 1200MHz - ondemand
#(max) 3201000 3200000 3000000 2800000 2600000 2400000 2200000 2000000 1800000 1600000 1400000 1200000 (min)
#ondemand userspace performance

#more /proc/cpuinfo | grep MHz

CMD=$(cat /proc/cpuinfo | grep processor | wc -l)
NUM_CPUS=$(expr $CMD - 1)

echo "- BEFORE -"
for i in $(seq 0 $NUM_CPUS)
do
	get_freq=$(cat /sys/devices/system/cpu/cpu$i/cpufreq/scaling_cur_freq)
	get_governor=$(cat /sys/devices/system/cpu/cpu$i/cpufreq/scaling_governor)
	echo -n "CPU"$i":" $get_freq
	echo " ("$get_governor")"
done

for i in $(seq 0 $NUM_CPUS)
do
	echo "powersave" > /sys/devices/system/cpu/cpu$i/cpufreq/scaling_governor
done

echo "- AFTER -"
for i in $(seq 0 $NUM_CPUS)
do
	get_freq=$(cat /sys/devices/system/cpu/cpu$i/cpufreq/scaling_cur_freq)
	get_governor=$(cat /sys/devices/system/cpu/cpu$i/cpufreq/scaling_governor)
	echo -n "CPU"$i":" $get_freq
	echo " ("$get_governor")"
done

#more /proc/cpuinfo | grep MHz

echo "1" > /proc/sys/kernel/nmi_watchdog