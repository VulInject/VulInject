static int FUN1(struct VAR1 *VAR2, gpa_t VAR3, VAR4 *VAR5)
{
int VAR6;

for (VAR6 = 0; VAR6 < VAR2->VAR7; VAR6++) {
const struct VAR8 *VAR9 = VAR2->VAR10[VAR6];

if (VAR9->VAR11 > VAR3 || VAR3 >= VAR9->VAR11 + VAR9->VAR12)
continue;

return VAR9->read(VAR2, VAR3 - VAR9->VAR11, VAR5);
}

return -VAR13;
}