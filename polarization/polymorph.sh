#!/bin/bash
c_files=$(find . -type f -name "*.c")
for file in $c_files; do
    sed -i 's/libft.h/libfpp.h/g' "$file"
done

echo "Replacement completed."

