static void write_header(const M_table_t *table, M_buf_t *buf, const M_list_u64_t *cell_widths, M_uint32 flags)
{
const char *const_temp;
size_t      num_cols;
size_t      i;

write_line_start(buf, flags);

num_cols = M_table_column_count(table);
for (i=0; i<num_cols; i++) {

const_temp = M_table_column_name(table, i);
M_buf_add_str(buf, const_temp);


write_cell_padding(buf, const_temp, cell_widths, i, flags);


M_buf_add_str(buf, " | ");
}

write_line_end(buf, flags);
}