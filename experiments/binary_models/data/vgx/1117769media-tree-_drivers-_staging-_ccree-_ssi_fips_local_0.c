int FUN1(struct VAR1 *VAR2, ssi_fips_error_t VAR3)
{
int VAR4 = 0;
ssi_fips_error_t VAR5;

FUN2("", VAR3);


if (VAR3 == VAR6) {
return -VAR7;
} 

if (FUN3(&VAR5) != 0) {
return -VAR7;
}
if (VAR5 != VAR6) {
return -VAR7;
}

VAR4 = FUN4(VAR3);
if (VAR4 != 0) {
return -VAR7;
}
VAR4 = FUN5(VAR8);
if (VAR4 != 0) {
return -VAR7;
}


if (VAR3 != VAR9) {
FUN6(VAR2, VAR3);
}
return VAR4;
}