// -*- mode: c++; indent-tabs-mode: nil; -*-
//
// Manta
// Copyright (c) 2013 Illumina, Inc.
//
// This software is provided under the terms and conditions of the
// Illumina Open Source Software License 1.
//
// You should have received a copy of the Illumina Open Source
// Software License 1 along with this program. If not, see
// <https://github.com/downloads/sequencing/licenses/>.
//

/// \brief provide access to cmake project version numbers

#pragma once

namespace manta {

inline
const char*
get_version() {
    return "@MANTA_VERSION@";
}


inline
const char*
get_full_version() {
    return "@MANTA_FULL_VERSION@";
}

}
