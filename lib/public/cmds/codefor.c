int main(string a)
{
    object ret;
    mixed code;

    if (file_size(TMP_EVAL_FILE+".c") != -1)
    rm (TMP_EVAL_FILE+".c");
    if (find_object(TMP_EVAL_FILE))
    destruct(find_object(TMP_EVAL_FILE));

    write_file(TMP_EVAL_FILE+".c", "mixed eval() { " + a + "; }\n");

    ret = load_object(TMP_EVAL_FILE);

    dump_prog(ret, 1, CODE_TMP_FILE);
    code = read_file( CODE_TMP_FILE);
    rm(CODE_TMP_FILE);
    rm(TMP_EVAL_FILE+".c");

    code = explode(code, ";;;  *** Disassembly ***\n");
    code = code[1];
    write(code[0..strlen(code)-1]);
    return 1;
}
