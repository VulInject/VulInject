static int
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
uint32_t VAR7, VAR8;

VAR6 = (struct VAR5 *)&VAR4->VAR9;
memset(VAR6, 0, 256);

strncpy(VAR6->VAR10.VAR11,
"",
sizeof(VAR6->VAR10.VAR11));
VAR7 = FUN2(VAR6->VAR10.VAR11,
sizeof(VAR6->VAR10.VAR11));
VAR7 += (VAR7 & 3) ? (4 - (VAR7 & 3)) : 4;
VAR8 = VAR12 + VAR7;
VAR4->VAR13 = FUN3(VAR8);
VAR4->VAR14 = FUN3(VAR15);
return VAR8;
}