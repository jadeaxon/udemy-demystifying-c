#!/usr/bin/env bash

last_modded=$(ls -1t *.c | head -1)
if gcc $last_modded |& tee make.out; then
	./a.out
else
	vim -q make.out
fi

