#!/bin/sh
(find . && ls -d -print) | grep -c / 
