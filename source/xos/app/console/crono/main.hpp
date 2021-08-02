///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 8/2/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_CRONO_MAIN_HPP
#define XOS_APP_CONSOLE_CRONO_MAIN_HPP

#include "xos/app/console/crono/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace crono {

/// class maint
template <class TExtends = main_opt, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw xos::exception(exception_unexpected);
    }

protected:
    /// ...run
    virtual int default_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_version_run(argc, argv, env))) {
            err = this->usage(argc, argv, env);
        }
        return err;
    }
}; /// class maint
typedef maint<> main;

} /// namespace crono
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// XOS_APP_CONSOLE_CRONO_MAIN_HPP
