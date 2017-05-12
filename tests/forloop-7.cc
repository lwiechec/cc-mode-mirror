static void DoFoo(const CXXRecordDecl *Class) {
    for (auto *Friend : Class->friends()) {}
}
