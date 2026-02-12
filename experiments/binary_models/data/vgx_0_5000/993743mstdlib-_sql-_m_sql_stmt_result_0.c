M_sql_error_t M_sql_stmt_result_binary(M_sql_stmt_t *stmt, size_t row, size_t col, const M_uint8 **bin, size_t *bin_size)
{
if (stmt == NULL || stmt->result == NULL || col >= stmt->result->num_cols || row >= stmt->result->num_rows || bin == NULL || bin_size == NULL)
return M_SQL_ERROR_INVALID_USE;

*bin      = NULL;
*bin_size = 0;

if (stmt->result->col_defs[col].type != M_SQL_DATA_TYPE_BINARY)
return M_SQL_ERROR_INVALID_TYPE;

if (stmt->result->cellinfo[row * stmt->result->num_cols + col].length != 0) {
*bin = (const M_uint8 *)M_buf_peek(stmt->result->rows[row]);

if (*bin != NULL) {
(*bin)   += stmt->result->cellinfo[row * stmt->result->num_cols + col].offset;
*bin_size = stmt->result->cellinfo[row * stmt->result->num_cols + col].length - 1; 
}
}

return M_SQL_ERROR_SUCCESS;
}