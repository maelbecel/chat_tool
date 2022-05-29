#!/bin/bash
readarray -d : -t ADDR <<< "$(netstat -nttlp | grep chat | awk {'print $4'})" && echo -e "\nListen on port ${ADDR[1]}\n"