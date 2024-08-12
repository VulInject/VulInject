void
FUN1(void)
{
struct VAR1 *VAR2;
int VAR3 = VAR4;
size_t VAR5;

if(VAR6 &&
!strcmp(VAR7, VAR6->VAR8)) return;
if(VAR9 &&
!strcmp(VAR7, VAR9->VAR8)) return;
VAR6 = 0;
VAR5 = strlen(VAR7) + 1;
VAR2 = (struct VAR1 *)
FUN2(sizeof(struct VAR1) + VAR5);
VAR2->VAR10 = VAR9;
VAR2->VAR8 = (char *)(VAR2 + 1);
(void) FUN3(VAR2->VAR8, VAR7, VAR5);
VAR9 = VAR2;
while(VAR3 && VAR2){
VAR3--;
VAR2 = VAR2->VAR10;
}
if(VAR2 && VAR2->VAR10){
free(VAR2->VAR10);
VAR2->VAR10 = 0;
}
}