TaskDataAccesses(TaskDataAccessesInfo taskAccessInfo)
    : _lock(),
      _accesses(),
      _accessFragments(), _taskwaitFragments()
{
}

TaskDataAccesses(__attribute__((unused)) TaskDataAccessesInfo taskAccessInfo)
    : _lock(),
      _accesses(),
      _accessFragments(), _taskwaitFragments()
{
}

TaskDataAccesses(noise_parens((unused)) TaskDataAccessesInfo taskAccessInfo)
    : _lock(),
      _accesses(),
      _accessFragments(), _taskwaitFragments()
{
}

TaskDataAccesses(foo((unused)) TaskDataAccessesInfo taskAccessInfo)
    : _lock(),
      _accesses(),
      _accessFragments(), _taskwaitFragments()
{
}

// Local Variables:
// c-noise-macro-with-parens-names: ("noise_parens")
// eval: (c-make-noise-macro-regexps)
// End:
