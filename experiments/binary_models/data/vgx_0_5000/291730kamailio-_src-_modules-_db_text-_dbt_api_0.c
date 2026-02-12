static int dbt_convert_rows(db1_res_t* _r, dbt_table_p _dres, int offset, int nrows)
{
int row = 0, c = 0;
dbt_row_p _rp = NULL;
if (!_r || !_dres) {
LM_ERR("invalid parameter\n");
return -1;
}

if (nrows == 0) {
return 0;
}

if (db_allocate_rows(_r) < 0) {
LM_ERR("could not allocate rows\n");
return -2;
}

_rp = _dres->rows;
while(_rp && c < offset) {
c++;
_rp = _rp->next;
}

while(_rp && row < nrows) {
if (dbt_convert_row(_r, &(RES_ROWS(_r)[row]), _rp) < 0) {
LM_ERR("failed to convert row #%d\n", row);
RES_ROW_N(_r) = row;
db_free_rows(_r);
return -4;
}
row++;
_rp = _rp->next;
}
RES_ROW_N(_r) = row;
RES_LAST_ROW(_r) = c + row;
return 0;
}