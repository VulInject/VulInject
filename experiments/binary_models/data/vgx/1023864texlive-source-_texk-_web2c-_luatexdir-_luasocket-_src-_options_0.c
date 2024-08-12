static int FUN1(VAR1 *VAR2, p_socket VAR3, int VAR4, int VAR5);
static int FUN2(VAR1 *VAR2, p_socket VAR3, int VAR4, int VAR5);
static int FUN3(VAR1 *VAR2, p_socket VAR3, int VAR4, int VAR5);
static int FUN4(VAR1 *VAR2, p_socket VAR3, int VAR4, int VAR5);
static int FUN5(VAR1 *VAR2, p_socket VAR3, int VAR4, int VAR5,
void *VAR6, int VAR7);
static int FUN6(VAR1 *VAR2, p_socket VAR3, int VAR4, int VAR5,
void *VAR6, int* VAR7);



int FUN7(VAR1 *VAR2, p_opt VAR8, p_socket VAR3)
{
const char *VAR5 = FUN8(VAR2, 2);      
while (VAR8->VAR5 && strcmp(VAR5, VAR8->VAR5))
VAR8++;
if (!VAR8->VAR9) {
char VAR10[57];
sprintf(VAR10, "", VAR5);
FUN9(VAR2, 2, VAR10);
}
return VAR8->FUN10(VAR2, VAR3);
}