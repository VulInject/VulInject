static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct pps_event_time VAR5;
struct timespec64 VAR6;
struct VAR7 *VAR8 = VAR2->VAR9;
int *VAR10 = VAR8->VAR11.VAR12;

FUN2(&VAR5);
VAR6 = VAR5.VAR13;
FUN3(&VAR6, VAR14);


while ((FUN4(&VAR5.VAR13, &VAR6) < 0) &&
FUN5(*VAR10)) {
struct timespec64 VAR15;
unsigned int VAR16;


VAR15 = VAR5.VAR13;
FUN3(&VAR15, VAR17);
do {
FUN2(&VAR5);
} while ((FUN4(&VAR5.VAR13, &VAR15) < 0) &&
FUN5(*VAR10));


VAR16 = (VAR5.VAR13.VAR18 << VAR19 |
VAR5.VAR13.VAR20);

VAR2->VAR21->FUN6(VAR2, VAR16);
}
*VAR4 = VAR5;
}