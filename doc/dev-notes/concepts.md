# Audit of Headers for Concepts/Constraints

## Progress

* [x] `BasicPluginFactory.h`
  * Refer to reasons listed below `PluginFactory.h`
* [x] `HorizontalRule.h`
  * No use of templates.
* [ ] `LibraryManager.h`
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
* [ ] `bit_manipulation.h`
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
* [ ] `detail/ostream_handle_impl.h`
* [x] `detail/plugin_search_path.h`
  * No use of templates.
* [x] `detail/provide_file_path.h`
  * No use of templates.
* [x] `detail/wrapLibraryManagerException.h`
  * No use of templates.
* [ ] `exempt_ptr.h`
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
* [ ] `map_vector.h`
* [ ] `maybe_ref.h`
* [ ] `metaprogramming.h`
* [ ] `name_of.h`
* [x] `no_delete.h`
  * No use of templates.
* [ ] `nybbler.h`
* [x] `os_libpath.h`
  * No use of templates.
* [ ] `ostream_handle.h`
* [x] `parsed_program_options.h`
  * No use of templates.
* [x] `plugin_libpath.h`
  * No use of templates.
* [x] `pow.h`
  * Diagnostics are already of sufficient clarity.
  * Encapsulating all acceptable use cases would appear to be overly
    complex.
* [ ] `propagate_const.h`
* [ ] `registry.h`
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
* [ ] `simple_stats.h`
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
* [ ] `trim.h`
* [ ] `value_ptr.h`
