int FUN1(bfd_vma VAR1, VAR2 *VAR3)
{
bfd_byte VAR4[4];
uint32_t VAR5;
int VAR6;

VAR6 = VAR3->FUN2(VAR1, VAR4, 4, VAR3);
if (VAR6 != 0) {
VAR3->FUN3(VAR6, VAR1, VAR3);
return -1;
}
VAR5 = FUN4(VAR4);

if (!FUN5(VAR3, VAR5)) {
FUN6("", "", VAR5);
}
return 4;
}