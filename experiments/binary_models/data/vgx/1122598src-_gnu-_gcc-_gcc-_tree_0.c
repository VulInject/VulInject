FUN1 (int VAR1, const char *VAR2)
{
tree VAR3;
size_t VAR4;


VAR4 = VAR1 + FUN2 (struct VAR5, VAR2) + 1;

VAR6[(int) VAR7]++;
VAR8[(int) VAR7] += VAR4;

VAR3 = FUN3 (VAR4);

memset (VAR3, 0, sizeof (struct VAR9));
FUN4 (VAR3, VAR10);
FUN5 (VAR3) = 1;
FUN6 (VAR3) = 1;
FUN7 (VAR3) = VAR1;
memcpy ((char *) FUN8 (VAR3), VAR2, VAR1);
((char *) FUN8 (VAR3))[VAR1] = '';

return VAR3;
}