static int FUN1(struct VAR1 *VAR2, int VAR3, u8 VAR4)
{
u8 VAR5[2];
int VAR6;

if (VAR3)
return -VAR7;

VAR5[0] = VAR4 & 3;

VAR6 = FUN2(VAR2, VAR8, VAR5, 1, 2);

FUN3("", VAR4, VAR6, VAR5[1]);

if (VAR6 < 0)
return VAR6;

return VAR5[1];
}