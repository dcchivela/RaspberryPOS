FILE(REMOVE_RECURSE
  "squeeze_automoc.cpp"
  "squeeze.shell"
  "CMakeFiles/translations"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/translations.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
