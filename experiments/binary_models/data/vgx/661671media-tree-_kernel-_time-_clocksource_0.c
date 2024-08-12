VAR1 FUN1(const char *VAR2, char *VAR3, size_t VAR4)
{
size_t VAR5 = VAR4;


if (!VAR4 || VAR4 >= VAR6)
return -VAR7;


if (VAR2[VAR4-1] == '')
VAR4--;
if (VAR4 > 0)
memcpy(VAR3, VAR2, VAR4);
VAR3[VAR4] = 0;
return VAR5;
}