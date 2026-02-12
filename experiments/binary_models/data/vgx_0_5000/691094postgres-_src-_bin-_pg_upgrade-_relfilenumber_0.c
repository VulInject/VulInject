static void transfer_relfile(FileNameMap *map, const char *type_suffix, bool vm_must_add_frozenbit);



void
transfer_all_new_tablespaces(DbInfoArr *old_db_arr, DbInfoArr *new_db_arr,
char *old_pgdata, char *new_pgdata)
{
switch (user_opts.transfer_mode)
{
case TRANSFER_MODE_CLONE:
prep_status_progress("Cloning user relation files");
break;
case TRANSFER_MODE_COPY:
prep_status_progress("Copying user relation files");
break;
case TRANSFER_MODE_LINK:
prep_status_progress("Linking user relation files");
break;
}


if (user_opts.jobs <= 1)
parallel_transfer_all_new_dbs(old_db_arr, new_db_arr, old_pgdata,
new_pgdata, NULL);
else
{
int			tblnum;


parallel_transfer_all_new_dbs(old_db_arr, new_db_arr, old_pgdata,
new_pgdata, old_pgdata);

for (tblnum = 0; tblnum < os_info.num_old_tablespaces; tblnum++)
parallel_transfer_all_new_dbs(old_db_arr,
new_db_arr,
old_pgdata,
new_pgdata,
os_info.old_tablespaces[tblnum]);

while (reap_child(true) == true)
;
}

end_progress_output();
check_ok();
}