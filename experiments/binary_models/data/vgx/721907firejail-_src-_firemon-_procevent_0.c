static int FUN1(void) {

int VAR1;
if ((VAR1 = socket(VAR2, VAR3, VAR4)) < 0)
goto VAR5;


struct sockaddr_nl VAR6;
memset(&VAR6, 0, sizeof(VAR6));
VAR6.VAR7 = FUN2();
VAR6.VAR8 = VAR9;
VAR6.VAR10 = VAR11;
if (FUN3(VAR1, (struct VAR12 *)&VAR6, sizeof(VAR6)) < 0)
goto VAR5;




int VAR13 = 1024 * 1024; 
socklen_t VAR14 = sizeof(int);
if (FUN4(VAR1, VAR15, VAR16, &VAR13, VAR14) == -1)
fprintf(VAR17, "");
else if (VAR18) {
if (FUN5(VAR1, VAR15, VAR19, &VAR13, &VAR14) == -1)
fprintf(VAR17, "");
else
FUN6("", VAR13 / 2); 
}


struct nlmsghdr VAR20;
memset(&VAR20, 0, sizeof(VAR20));
VAR20.VAR21 = FUN7(sizeof(struct VAR22) + sizeof(enum VAR23));
VAR20.VAR24 = FUN2();
VAR20.VAR25 = VAR26;

struct cn_msg VAR22;
memset(&VAR22, 0, sizeof(VAR22));
VAR22.VAR27.VAR28 = VAR11;
VAR22.VAR27.VAR29 = VAR30;
VAR22.VAR31 = sizeof(enum VAR23);

struct iovec VAR32[3];
VAR32[0].VAR33 = &VAR20;
VAR32[0].VAR34 = sizeof(VAR20);
VAR32[1].VAR33 = &VAR22;
VAR32[1].VAR34 = sizeof(VAR22);

enum proc_cn_mcast_op VAR35 = VAR36;
VAR32[2].VAR33 = &VAR35;
VAR32[2].VAR34 = sizeof(VAR35);

if (FUN8(VAR1, VAR32, 3) == -1)
goto VAR5;

return VAR1;
VAR5:
fprintf(VAR17, "");
FUN9(1);
}