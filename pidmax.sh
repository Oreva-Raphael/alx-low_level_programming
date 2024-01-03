#! /bin/bash

filepath="/proc/sys/kernel/pid_max"
if [ -f "$filepath" ]; then
	cat "$filepath"
else
	echo "file not found or inaccessible"
fi

