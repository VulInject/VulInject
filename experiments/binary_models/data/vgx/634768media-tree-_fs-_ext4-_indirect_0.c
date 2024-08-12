static VAR1 *FUN1(struct VAR2 *VAR2, int VAR3,
ext4_lblk_t VAR4[4], Indirect VAR5[4],
VAR6 *VAR7)
{
VAR1 *VAR8, *VAR9;
int VAR10, VAR11;

*VAR7 = 0;

for (VAR10 = VAR3; VAR10 > 1 && !VAR4[VAR10-1]; VAR10--)
;
VAR8 = FUN2(VAR2, VAR10, VAR4, VAR5, &VAR11);

if (!VAR8)
VAR8 = VAR5 + VAR10-1;

if (!VAR8->VAR12 && *VAR8->VAR9)

goto VAR13;
for (VAR9 = VAR8; (VAR9 > VAR5) && FUN3((VAR6 *) VAR9->VAR14->VAR15, VAR9->VAR9); VAR9--)
;

if (VAR9 == VAR5 + VAR10 - 1 && VAR9 > VAR5) {
VAR9->VAR9--;
} else {
*VAR7 = *VAR9->VAR9;

*VAR9->VAR9 = 0;
}


while (VAR8 > VAR9) {
FUN4(VAR8->VAR14);
VAR8--;
}
VAR13:
return VAR8;
}