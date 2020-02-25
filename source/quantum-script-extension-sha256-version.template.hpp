//
// Quantum Script Extension SHA256
//
// Copyright (c) 2020 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#ifndef QUANTUM_SCRIPT_EXTENSION_SHA256_VERSION_HPP
#define QUANTUM_SCRIPT_EXTENSION_SHA256_VERSION_HPP

#define QUANTUM_SCRIPT_EXTENSION_SHA256_VERSION_ABCD                 $VERSION_ABCD
#define QUANTUM_SCRIPT_EXTENSION_SHA256_VERSION_STR                 "$VERSION_VERSION"
#define QUANTUM_SCRIPT_EXTENSION_SHA256_VERSION_STR_BUILD           "$VERSION_BUILD"
#define QUANTUM_SCRIPT_EXTENSION_SHA256_VERSION_STR_DATETIME        "$VERSION_DATETIME"

#ifndef XYO_RC

#ifndef QUANTUM_SCRIPT_EXTENSION_SHA256__EXPORT_HPP
#include "quantum-script-extension-sha256--export.hpp"
#endif

namespace Quantum {
	namespace Script {
		namespace Extension {
			namespace SHA256 {
				namespace Version {
					QUANTUM_SCRIPT_EXTENSION_SHA256_EXPORT const char *version();
					QUANTUM_SCRIPT_EXTENSION_SHA256_EXPORT const char *build();
					QUANTUM_SCRIPT_EXTENSION_SHA256_EXPORT const char *versionWithBuild();
					QUANTUM_SCRIPT_EXTENSION_SHA256_EXPORT const char *datetime();
				};
			};
		};
	};
};

#endif
#endif

