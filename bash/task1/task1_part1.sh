#!/usr/bin/bash

array=("L68" "L30" "R48" "L5" "R60" "L55" "L1" "L99" "R14" "L82")
count_0=0
current_number=50

for element in "${array[@]}"; do
	direction=${element:0:1}
	n=${element:1}
	number=$(( n + 0 ))
	

	if [[ "$direction" == "L" ]]; then
		current_number=$(( ((current_number - number) % 100 + 100) % 100 ))
	else
		current_number=$(( (current_number + number) % 100 ))
	fi

	if (( current_number == 0 )); then
		count_0=$((count_0+1))
	fi	

done
echo "Answer: ${count_0}"


