void
FUN1(void)
{
FUN2();
if (VAR1 != NULL) {

FUN3(VAR1);
VAR1 = NULL;
}
}

VAR2;						\
if(VAR3 == VAR4 || VAR3 == VAR5) {  \
VAR6++;					\
FUN4("", VAR6);    \
sleep(VAR6);				\
} else {                                        \
break;                                      \
}						\
} while(VAR6 < VAR7)

VAR8
FUN5(void)
{
cs_error_t VAR3;
int VAR9 = -1, VAR10 = 0, VAR11;
uid_t VAR12 = 0;
gid_t VAR13 = 0;
pid_t VAR14 = 0;
uint32_t VAR15;

static struct mainloop_fd_callbacks VAR16 = {
.VAR17 = VAR18,
.VAR19 = VAR20,
};

FUN6(VAR10, 30, VAR3 = FUN7(&VAR21, &VAR22));

if (VAR3 != VAR23) {
FUN8("" VAR24 "",
FUN9(VAR3), VAR3);
return VAR25;
}

VAR3 = FUN10(VAR21, &VAR9);
if (VAR3 != VAR23) {
FUN8("" VAR24 "",
FUN9(VAR3), VAR3);
goto VAR26;
}


if (!(VAR11 = FUN11(VAR9, (VAR27) 0,(VAR28) 0, &VAR14,
&VAR12, &VAR13))) {
FUN8(""
"",
(long long) FUN12(VAR14),
(long long) VAR12, (long long) VAR13);
goto VAR26;
} else if (VAR11 < 0) {
FUN8(""
VAR24 "", strerror(-VAR11), -VAR11);
goto VAR26;
}

VAR10 = 0;
FUN6(VAR10, 30, VAR3 = FUN13(VAR21, &VAR15));
if (VAR3 != VAR23) {
FUN8(""
VAR24 "", FUN9(VAR3), VAR3);
goto VAR26;
}
FUN4("", (unsigned long) VAR15);

VAR10 = 0;
FUN6(VAR10, 30, VAR3 = FUN14(VAR21, 0));
if (VAR3 != VAR23) {
FUN8("" VAR24 "",
FUN9(VAR3), VAR3);
goto VAR26;
}

FUN15("", VAR29, VAR9, &VAR21, &VAR16);
return VAR30;

VAR26:
FUN16(VAR21);
return VAR25;
}