#!/bin/sh

INPUTS=("first input" "second input" "third input")

for input in "${INPUTS[@]}"
do
	echo "./c-echo ${input}" // just saying what will wr
	output=$(./c-echo ${input})
	echo "Output: \"${output}\""
	echo "Input: \"${input}\""

	if [ "${output}" = "${input}" ]
	then 
		echo "Test passed"
	else
		echo "Test Failed"
	fi
done

