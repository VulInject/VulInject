void FUN1(struct VAR1     *VAR2,
enum pim_ifassert_state   VAR3,
struct in_addr            VAR4,
struct pim_assert_metric  VAR5)
{
int VAR6 = (VAR2->VAR7.VAR8 != VAR4.VAR8);
int VAR9 = !FUN2(&VAR2->VAR10,
&VAR5);

if (VAR11) {
if (VAR2->VAR12 != VAR3) {
char VAR13[100];
char VAR14[100];
FUN3("", VAR2->VAR15, VAR13, sizeof(VAR13));
FUN3("", VAR2->VAR16, VAR14, sizeof(VAR14));
FUN4("",
VAR17,
VAR13, VAR14,
FUN5(VAR2->VAR12),
FUN5(VAR3),
VAR2->VAR18->VAR19);
}

if (VAR6) {
char VAR13[100];
char VAR14[100];
char VAR20[100];
char VAR21[100];
FUN3("", VAR2->VAR15, VAR13, sizeof(VAR13));
FUN3("", VAR2->VAR16, VAR14, sizeof(VAR14));
FUN3("", VAR2->VAR7, VAR20, sizeof(VAR20));
FUN3("", VAR4, VAR21, sizeof(VAR21));
FUN4("",
VAR17,
VAR13, VAR14,
VAR20, VAR21, VAR2->VAR18->VAR19);
}
} 

VAR2->VAR12         = VAR3;
VAR2->VAR7        = VAR4;
VAR2->VAR10 = VAR5;
VAR2->VAR22      = FUN6();

if (VAR6 || VAR9) {
FUN7(VAR2->VAR23);
FUN8(VAR2);
FUN9(VAR2);
}
}