using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Football
{
    namespace Football
    {
        public partial class Component1 : Component
        {
            public Component1()
            {
                InitializeComponent();
            }

            public Component1(IContainer container)
            {
                container.Add(this);

                InitializeComponent();
            }
        }
    }

}
