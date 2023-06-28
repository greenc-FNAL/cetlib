# Audit of Headers for Concepts/Constraints

## Progress

* [x] `BasicPluginFactory.h`
  * Refer to reasons listed below `PluginFactory.h`
* [x] `HorizontalRule.h`
  * No use of templates.
* [x] `LibraryManager.h`
* [x] `MD5Digest.h`
  * No use of templates.
* [x] `PluginFactory.h`
  * Concepts would provide very little value and decrease the readability of existing code.
  * Equivalent value would be provided by an extra line of comment.
* [x] `PluginTypeDeducer.h`
  * The only use of templates here is unconstrained by design.
* [x] `ProvideFilePathMacro.h`
  * No use of templates.
* [x] `ProvideMakePluginMacros.h`
  * No use of templates.
* [x] `base_converter.h`
  * No use of templates.
* [x] `bit_manipulation.h`
* [x] `bit_manipulation_cxx20.h`
* [x] `bold_fontify.h`
  * No use of templates.
* [x] `canonical_number.h`
  * No use of templates.
* [x] `canonical_string.h`
  * No use of templates.
* [x] `column_width.h`
  * No use of templates.
* [x] `compiler_macros.h`
  * No use of templates.
* [x] `container_algorithms.h`
  * Diagnostics are already of sufficient clarity.
* [x] `cpu_timer.h`
  * No use of templates.
* [x] `crc32.h`
  * No use of templates.
* [x] `detail/ostream_handle_impl.h`
  * Diagnostics are already of sufficient clarity.
* [x] `detail/plugin_search_path.h`
  * No use of templates.
* [x] `detail/provide_file_path.h`
  * No use of templates.
* [x] `detail/wrapLibraryManagerException.h`
  * No use of templates.
* [x] `exempt_ptr.h`
  * Value proposition is unclear.
* [x] `filepath_maker.h`
  * No use of templates.
* [x] `filesystem.h`
  * No use of templates.
* [x] `getenv.h`
  * No use of templates.
* [x] `hard_cast.h`
* [ ] `hypot.h`
* [x] `include.h`
  * No use of templates.
* [x] `includer.h`
  * No use of templates.
* [x] `loadable_libraries.h`
  * No use of templates.
* [x] `lpad.h`
  * No use of templates.
* [x] `map_vector.h`
  * Value is not meant to be constrained.
* [x] `maybe_ref.h`
  * Class is ripe for deprecation and replacement by std::optional [c++17]
* [x] `metaprogramming.h`
  * Candidate for replacement when supporting standards below C++20 is no longer necessary.
* [x] `name_of.h`
  * Concepts not applicable
* [x] `no_delete.h`
  * No use of templates.
* [x] `nybbler.h`
  * No use of templates.
* [x] `os_libpath.h`
  * No use of templates.
* [x] `ostream_handle.h`
  * Diagnostics are already of sufficient clarity.
* [x] `parsed_program_options.h`
  * No use of templates.
* [x] `plugin_libpath.h`
  * No use of templates.
* [x] `pow.h`
  * Diagnostics are already of sufficient clarity.
  * Encapsulating all acceptable use cases would appear to be overly
    complex.
* [x] `propagate_const.h`
  * Candidate for replacement using std::propagate_const if it gets integrated into a standard.
* [x] `registry.h`
  * Concepts not necessary.
* [ ] `registry_via_id.h`
* [x] `replace_all.h`
  * No use of templates.
* [x] `rpad.h`
  * No use of templates.
* [x] `search_path.h`
* [x] `sha1.h`
  * No use of templates.
* [x] `shlib_utils.h`
  * No use of templates.
* [x] `simple_stats.h`
  * Only use of templates is for a streaming operator. Use of templates is unnecessary.
* [ ] `split.h`
* [x] `split_by_regex.h`
  * No use of templates.
* [x] `split_path.h`
  * No use of templates.
* [ ] `sqlite/Connection.h`
* [ ] `sqlite/ConnectionFactory.h`
* [x] `sqlite/Exception.h`
  * No use of templates.
* [ ] `sqlite/Ntuple.h`
* [x] `sqlite/Transaction.h`
  * No use of templates.
* [ ] `sqlite/column.h`
* [ ] `sqlite/create_table.h`
* [x] `sqlite/detail/DefaultDatabaseOpenPolicy.h`
  * No use of templates.
* [ ] `sqlite/detail/bind_parameters.h`
* [x] `sqlite/detail/column_constraint.h`
  * No use of templates.
* [ ] `sqlite/detail/convert.h`
* [ ] `sqlite/detail/extract.h`
* [ ] `sqlite/detail/get_result.h`
* [x] `sqlite/detail/normalize_statement.h`
  * No use of templates.
* [x] `sqlite/exec.h`
  * No use of templates.
* [ ] `sqlite/helpers.h`
* [ ] `sqlite/insert.h`
* [ ] `sqlite/query_result.h`
* [ ] `sqlite/select.h`
* [ ] `sqlite/statistics.h`
* [x] `trim.h`
  * No use of templates.
* [x] `value_ptr.h`
