find . -type f -name "*.sh"

find . -type f -name "*.sh" -exec basename -s .sh {} \;
