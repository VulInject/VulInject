static bool FUN1(size_t VAR1, size_t VAR2,
struct VAR3 *VAR4) {
if (VAR1 > (VAR2 - VAR4->read)) {
VAR4->VAR1 = VAR1 + VAR4->read;
VAR4->read = 0;
VAR4->VAR5 = VAR6;
return false;
} else {
VAR4->read += VAR1;
VAR4->VAR1 = 0;
return true;
}
}