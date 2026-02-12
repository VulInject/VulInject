static void ecore_ilt_cli_blk_fill(struct ecore_ilt_client_cfg	*p_cli,
struct ecore_ilt_cli_blk	*p_blk,
u32				start_line,
u32				total_size,
u32				elem_size)
{
u32 ilt_size = ILT_PAGE_IN_BYTES(p_cli->p_size.val);


if (p_blk->total_size)
return;

p_blk->total_size = total_size;
p_blk->real_size_in_page = 0;
if (elem_size)
p_blk->real_size_in_page = (ilt_size / elem_size) * elem_size;
p_blk->start_line = start_line;
}