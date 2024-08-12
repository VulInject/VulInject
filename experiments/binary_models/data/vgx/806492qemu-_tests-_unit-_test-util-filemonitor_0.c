static bool
FUN1(VAR1 *VAR2,
int64_t VAR3,
QFileMonitorEvent VAR4,
const char *VAR5,
bool VAR6)
{
VAR7 *VAR8;
bool VAR9 = false;

VAR8 = FUN2(VAR2, NULL);

VAR10:
if (!VAR8) {
FUN3("" VAR11 "",
VAR3, VAR4, VAR5);
return false;
}

if (VAR3 != VAR8->VAR3) {
if (VAR6) {
VAR8 = FUN2(VAR2, VAR8);
VAR6 = false;
goto VAR10;
}
FUN3("" VAR11 "" VAR11 "",
VAR3, VAR8->VAR3);
goto VAR12;
}

if (VAR4 != VAR8->VAR4) {
FUN3("", VAR4, VAR8->VAR4);
goto VAR12;
}

if (!FUN4(VAR5, VAR8->VAR5)) {
FUN3("",
VAR5, VAR8->VAR5);
goto VAR12;
}

VAR9 = true;

VAR12:
FUN5(VAR8);
return VAR9;
}