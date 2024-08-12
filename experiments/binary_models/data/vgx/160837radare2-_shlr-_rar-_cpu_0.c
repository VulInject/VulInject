static int FUN1 (VAR1 *VAR2, int VAR3, int VAR4) {
int VAR5, VAR6 = 0;
if (VAR3<VAR2->VAR7)
for (VAR5=0; VAR5<VAR4; VAR5++)
if (FUN2 (VAR2, VAR3+VAR5)>0)
VAR6 |= (1<<VAR5);
return VAR6;
}