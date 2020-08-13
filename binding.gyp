{
  "targets": [
    {
      "target_name": "addon",
      "sources": [
        "addon.cc",
        "enums.cc",
        "sleep.cc",
        "wake.cc",
        "inputTime.cc"
      ],
      "include_dirs": ["<!(node -e \"require('nan')\")"]
    }
  ]
}