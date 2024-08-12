static int
FUN1(struct VAR1 *VAR2, VAR3 **VAR4,
struct VAR5 *VAR6)
{
struct mwifiex_ie_types_tsf_timestamp VAR7;
__le64 VAR8;


if (VAR4 == NULL)
return 0;
if (*VAR4 == NULL)
return 0;

memset(&VAR7, 0x00, sizeof(struct VAR9));

VAR7.VAR10.VAR11 = FUN2(VAR12);
VAR7.VAR10.VAR13 = FUN2(2 * sizeof(VAR8));

memcpy(*VAR4, &VAR7, sizeof(VAR7.VAR10));
*VAR4 += sizeof(VAR7.VAR10);


VAR8 = FUN3(VAR6->VAR14);
memcpy(*VAR4, &VAR8, sizeof(VAR8));
*VAR4 += sizeof(VAR8);

VAR8 = FUN3(VAR6->VAR15);

FUN4(VAR2->VAR16, VAR17,
"",
VAR18, VAR6->VAR15, VAR6->VAR14);

memcpy(*VAR4, &VAR8, sizeof(VAR8));
*VAR4 += sizeof(VAR8);

return sizeof(VAR7.VAR10) + (2 * sizeof(VAR8));
}