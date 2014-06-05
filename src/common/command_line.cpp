// Copyright (c) 2012-2013 The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "command_line.h"

namespace command_line
{
  const arg_descriptor<bool>          arg_help = {"help", "Produce help message"};
  const arg_descriptor<bool>          arg_version = {"version", "Output version information"};
  const arg_descriptor<std::string>   arg_data_dir = {"data-dir", "Specify data directory"};
  const arg_descriptor<std::string>   arg_set_donation_mode =  {"donation-vote", "Select one of two options for donations vote: \"true\"(to vote fore donation) or \"false\"(to vote against)", "", true};
}
