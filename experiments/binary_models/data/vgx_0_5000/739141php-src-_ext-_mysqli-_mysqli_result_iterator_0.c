static void php_mysqli_result_iterator_rewind(zend_object_iterator *iter)
{
php_mysqli_result_iterator *iterator = (php_mysqli_result_iterator*) iter;
mysqli_object *intern = iterator->result;
MYSQL_RES	*result;

MYSQLI_FETCH_RESOURCE_BY_OBJ(result, MYSQL_RES *, intern, "mysqli_result", MYSQLI_STATUS_VALID);

if (mysqli_result_is_unbuffered(result)) {
if (result->unbuf->eof_reached) {
zend_error(E_WARNING, "Data fetched with MYSQLI_USE_RESULT can be iterated only once");
return;
}
} else {
mysql_data_seek(result, 0);
}
iterator->row_num = -1;
php_mysqli_result_iterator_move_forward(iter);
}