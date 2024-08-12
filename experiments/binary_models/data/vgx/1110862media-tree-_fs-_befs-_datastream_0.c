const befs_inode_addr VAR1 = { 0, 0, 0 };

static int FUN1(struct VAR2 *VAR3,
const VAR4 *VAR5,
befs_blocknr_t VAR6, VAR7 *VAR8);

static int FUN2(struct VAR2 *VAR3,
const VAR4 *VAR5,
befs_blocknr_t VAR6,
VAR7 *VAR8);

static int FUN3(struct VAR2 *VAR3,
const VAR4 *VAR5,
befs_blocknr_t VAR6,
VAR7 *VAR8);


struct VAR9 *
FUN4(struct VAR2 *VAR3, const VAR4 *VAR10,
befs_off_t VAR11, VAR12 *VAR13)
{
struct VAR9 *VAR14;
befs_block_run VAR8;
befs_blocknr_t VAR15;	

FUN5(VAR3, "", VAR16, VAR11);
VAR15 = VAR11 >> FUN6(VAR3)->VAR17;
if (VAR13)
*VAR13 = VAR11 - (VAR15 << FUN6(VAR3)->VAR17);

if (FUN7(VAR3, VAR10, VAR15, &VAR8) != VAR18) {
FUN8(VAR3, "",
(unsigned long)VAR15);
FUN5(VAR3, "", VAR16);
return NULL;
}
VAR14 = FUN9(VAR3, VAR8);
if (!VAR14) {
FUN8(VAR3, "",
(unsigned long)VAR15);
return NULL;
}

FUN5(VAR3, "", VAR16, VAR11);

return VAR14;
}