int FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3)
{
int VAR4;

if (VAR2 == NULL) {
return 1;
}

if (VAR3 == NULL) {
return -1;
}

VAR4 = VAR2->VAR5 - VAR3->VAR5;
if (VAR4 != 0) {
return VAR4;
}

VAR4 = VAR2->VAR6 - VAR3->VAR6;
if (VAR4 != 0) {
return VAR4;
}

if (FUN2(&VAR2->VAR7)) {
VAR4 = memcmp(&VAR2->VAR7.VAR8, &VAR3->VAR7.VAR8,
sizeof(VAR2->VAR7.VAR8));
if (VAR4 != 0) {
return VAR4;
}
} else if (FUN3(&VAR2->VAR7)) {
VAR4 = memcmp(&VAR2->VAR7.VAR9, &VAR3->VAR7.VAR9,
sizeof(VAR2->VAR7.VAR9));
if (VAR4 != 0) {
return VAR4;
}
}

return 0;
}