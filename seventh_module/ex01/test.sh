#!/bin/bash
make re
result="$(echo -n $?)"
echo $result
if [ $result -eq 0 ];
then

fi