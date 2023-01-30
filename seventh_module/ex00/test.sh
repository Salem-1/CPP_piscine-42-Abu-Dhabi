#!/bin/bash
make re
result="$(echo -n $?)"
echo $result
if [ $result -eq 0 ];
then
	echo "casting c type c"
	./cast "c"
	echo
	echo "casting 0 type i"
	./cast "0"
	echo
	echo "casting 0.0 type f"
	./cast "0.0"
	echo
	echo "casting \0 gives nothing"
	./cast ""
	echo
	echo "casting 1.1f type f"
	./cast "1.1f"
	echo
	echo "casting 13535135 type int"
	./cast "13535135"
	echo
	echo "casting -13535135 type int"
	./cast "-13535135"
	echo
	echo "casting nonsense type no_type"
	./cast "nonsense"
	echo
	echo "casting 13516513515.641651351 type double"
	./cast "13516513515.641651351"
	echo
	echo "casting 3351365135135135135135135135135135135151.135135135135131351351 type double"
	./cast "3351365135135135135135135135135135135151.135135135135131351351"
	echo
	echo "casting 5151351313513513.531f type f"
	./cast "5151351313513513.531f"
	echo
	echo "casting -5151351313513513.531f type f"
	./cast "-5151351313513513.531f"
	echo
	echo "casting 0f type f"
	./cast "0f"
	echo
	echo testing limits
	echo
	echo "casting inff type f"
	./cast "inff"
	echo
	echo "casting -inff type f"
	./cast "-inff"
	echo
	echo "casting inf type d"
	./cast "inf"
	echo
	echo "casting -inf type d"
	./cast "-inf"
	echo
	echo "casting nanf type f"
	./cast "nanf"
	echo
	echo "casting nan type d"
	./cast "nan"
	echo

fi