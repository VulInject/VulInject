static void
FUN1(
struct VAR1 *VAR2,
VAR3 *VAR4
)
{
struct VAR5 *VAR6;

u_long VAR7[FUN2(VAR8, 8)];
size_t VAR9;
size_t VAR10;
size_t VAR11;
size_t VAR12;
int VAR13;
l_fp VAR14;
struct VAR15 *VAR16;

VAR9 = FUN2(VAR2->VAR17, FUN3(VAR7));
for (VAR10 = 0; VAR10 < VAR9; VAR10++)
VAR7[VAR10] = FUN4(&VAR2->VAR18[VAR10].VAR19);

VAR20:
VAR13 = FUN5(VAR21, VAR22, 0, VAR10,
sizeof(VAR23), (char *)VAR7, &VAR11,
&VAR12, (void *)&VAR6, 0, sizeof(struct VAR5));

if (VAR13 == VAR24 && VAR21 == VAR25) {
VAR21 = VAR26;
goto VAR20;
}

if (VAR13 != 0)
return;

if (!FUN6(VAR11, VAR4))
return;

if (!FUN7(VAR12, sizeof(struct VAR5)))
return;

while (VAR11-- > 0) {
(void) fprintf(VAR4, "",
FUN8(VAR6->VAR27));
for (VAR16 = VAR28; VAR16->VAR29 >= 0; VAR16++)
if (VAR16->VAR29 == VAR6->VAR30)
break;
if (VAR16->VAR29 >= 0)
(void) fprintf(VAR4, "",
VAR16->VAR31);
else
(void) fprintf(VAR4, "",
VAR6->VAR30);
(void) fprintf(VAR4, "",
VAR6->VAR32);
(void) fprintf(VAR4, "",
VAR6->VAR33);
(void) fprintf(VAR4, "",
(VAR34)FUN9(VAR6->VAR35));
(void) fprintf(VAR4, "",
(VAR34)FUN9(VAR6->VAR36));
(void) fprintf(VAR4, "",
(VAR34)FUN9(VAR6->VAR37));
(void) fprintf(VAR4, "",
(VAR34)FUN9(VAR6->VAR38));
(void) fprintf(VAR4, "",
(VAR34)FUN9(VAR6->VAR39));
FUN10(&VAR6->VAR40, &VAR14);
(void) fprintf(VAR4, "",
FUN11(&VAR14, 6));
FUN10(&VAR6->VAR41, &VAR14);
(void) fprintf(VAR4, "",
FUN11(&VAR14, 6));
(void) fprintf(VAR4, "",
(VAR34)FUN9(VAR6->VAR42));
(void) fprintf(VAR4, "",
FUN12(FUN9(VAR6->VAR43), 0));
(void) fprintf(VAR4, "",
VAR6->VAR44);

if (VAR11 > 0)
(void) fprintf(VAR4, "");
VAR6++;
}
}