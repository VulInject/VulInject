static int FUN1(struct VAR1 *VAR2, int VAR3)
{
u8 VAR4;

if (VAR3 >= VAR5)
return -VAR6;

VAR4 = VAR7[VAR3];

if (! VAR4)
return -VAR6;

FUN2(VAR2, 6, VAR4 & 0xF0);
FUN3(VAR2)->VAR3 = VAR3;

return 0;
}