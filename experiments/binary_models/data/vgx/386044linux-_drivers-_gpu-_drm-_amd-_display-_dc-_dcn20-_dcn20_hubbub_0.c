static enum VAR1 FUN1(unsigned int VAR2)
{
enum dcn_hubbub_page_table_block_size VAR3 = 0;

switch (VAR2) {
case 4096:
VAR3 = VAR4;
break;
case 65536:
VAR3 = VAR5;
break;
case 32768:
VAR3 = VAR6;
break;
default:
FUN2(false);
VAR3 = VAR2;
break;
}

return VAR3;
}