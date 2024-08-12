bool FUN1(const struct VAR1 *VAR2,
const struct VAR1 *VAR3)
{
size_t VAR4;

for (VAR4 = 0; VAR4 < VAR2->VAR5.VAR6 || VAR4 < VAR3->VAR5.VAR6; VAR4++) {
if (VAR4 >= VAR2->VAR5.VAR6) {
if (VAR3->VAR5.VAR7[VAR4] != 0)
return false;
} else if (VAR4 >= VAR3->VAR5.VAR6) {
if (VAR2->VAR5.VAR7[VAR4] != 0)
return false;
} else if (memcmp(&VAR2->VAR5.VAR7[VAR4], &VAR3->VAR5.VAR7[VAR4],
sizeof(VAR8)) != 0)
return false;
}

return true;
}