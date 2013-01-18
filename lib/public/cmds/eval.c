int main(string arg)
{
    /* clean up first */
    if (file_size(TMP_EVAL_FILE+".c") != -1)
    rm (TMP_EVAL_FILE+".c");
    if (find_object(TMP_EVAL_FILE))
    destruct(find_object());

    write_file(TMP_EVAL_FILE+".c","mixed eval() { "+arg+"; }\n");
    printf("Result = %O\n", TMP_EVAL_FILE->eval());
    return 1;
}
